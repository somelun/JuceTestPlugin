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
//    , public juce::Slider::Listener
{
public:
    TestPluginAudioProcessorEditor (TestPluginAudioProcessor&);
    virtual ~TestPluginAudioProcessorEditor() override;

    //==============================================================================
    virtual void paint (juce::Graphics&) override;
    virtual void resized() override;
    
    //==============================================================================
//    virtual void sliderValueChanged(juce::Slider* slider) override;

private:
    TestPluginAudioProcessor& audioProcessor;
    
    juce::Slider driveKnob;
    juce::Slider rangeKnob;
    juce::Slider blendKnob;
    juce::Slider volumeKnob;
    
//    std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
//    juce::AudioProcessorValueTreeState::SliderAttachment driveAttachment;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestPluginAudioProcessorEditor)
};
