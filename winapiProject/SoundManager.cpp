#include "SoundManager.h"

SoundManager::SoundManager()
{
    channel = nullptr;
    channel2 = nullptr;
    //extradriverdata = nullptr;
    FMOD::System_Create(&system);
    system->init((int)E_Sound::MAX, FMOD_INIT_NORMAL, nullptr);
    for (int i = 0; i < (int)E_Sound::MAX; ++i) {
        system->createSound(enumSound::toFile((E_Sound)i).c_str(), FMOD_DEFAULT, 0, &soundarr.at(i));
    }
    soundarr.at((int)E_Sound::BackGround)->setMode(FMOD_LOOP_NORMAL);

    system->playSound(soundarr.at((int)E_Sound::BackGround), 0, false, &channel);
}

SoundManager::~SoundManager() {
    for (int i = 0; i < (int)E_Sound::MAX; ++i) {
        soundarr.at(i)->release();
    }
    system->release();
    system->close();
}

void SoundManager::changeBackground(E_Sound p_sound)
{
    channel->stop();

    soundarr.at((int)p_sound)->setMode(FMOD_LOOP_NORMAL);
    system->playSound(soundarr.at((int)p_sound), 0, false, &channel);
}

void SoundManager::setBackVolume(float p_val)
{
    channel->setVolume(p_val);
}

void SoundManager::setEffectVolume(float p_val)
{
    channel2->setVolume(p_val);
}

bool SoundManager::PlaySound_(E_Sound p_sound)
{
    FMOD_RESULT result = system->playSound(soundarr.at((int)p_sound), 0, false, &channel2);
    return result == FMOD_OK;
}