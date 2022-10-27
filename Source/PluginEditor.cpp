/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

using namespace juce;

//==============================================================================
TestPluginAudioProcessorEditor::TestPluginAudioProcessorEditor(TestPluginAudioProcessor& p)
    : AudioProcessorEditor(&p)
    , audioProcessor(p)
//    , driveAttachment(audioProcessor.getState(), "drive", driveKnob)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 200);
    
//    driveKnob.setSliderStyle(Slider::SliderStyle::Rotary);
//    driveKnob.setTextBoxStyle(Slider::NoTextBox, false, 50, 50);
//    addAndMakeVisible(driveKnob);
//    
//    rangeKnob.setSliderStyle(Slider::SliderStyle::Rotary);
//    rangeKnob.setTextBoxStyle(Slider::NoTextBox, false, 50, 50);
//    addAndMakeVisible(rangeKnob);
//    
//    blendKnob.setSliderStyle(Slider::SliderStyle::Rotary);
//    blendKnob.setTextBoxStyle(Slider::NoTextBox, false, 50, 50);
//    addAndMakeVisible(blendKnob);
//    
//    volumeKnob.setSliderStyle(Slider::SliderStyle::Rotary);
//    volumeKnob.setTextBoxStyle(Slider::NoTextBox, false, 50, 50);
//    addAndMakeVisible(volumeKnob);
//    volumeKnob.setRange(-60.0f, 0.0f, 0.01f);
//    volumeKnob.setValue(-20.0f);
//    volumeKnob.addListener(this);
    
    
    
}

TestPluginAudioProcessorEditor::~TestPluginAudioProcessorEditor()
{
}

//==============================================================================
void TestPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll(Colours::black);
}

void TestPluginAudioProcessorEditor::resized()
{
    volumeKnob.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 75, 100, 150);
}

//void TestPluginAudioProcessorEditor::sliderValueChanged(Slider* slider)
//{
//    if (slider == &volumeKnob)
//    {
//        audioProcessor.decibels = slider->getValue();
//    }
//}
