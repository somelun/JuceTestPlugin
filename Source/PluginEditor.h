/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class TestPluginAudioProcessorEditor
    : public juce::AudioProcessorEditor
{
public:
    TestPluginAudioProcessorEditor (TestPluginAudioProcessor&);
    virtual ~TestPluginAudioProcessorEditor() override;

    //==============================================================================
    virtual void paint (juce::Graphics&) override;
    virtual void resized() override;

private:
    TestPluginAudioProcessor& audioProcessor;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestPluginAudioProcessorEditor)
};
