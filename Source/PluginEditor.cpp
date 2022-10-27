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
{
    setSize (500, 200);
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
}
