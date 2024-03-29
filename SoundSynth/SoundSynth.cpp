// SoundSynth.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include <string>
#include <vector>
#include "olcNoiseMaker.h"

using namespace std;

int main()
{
	wcout << "olc - Sound synth" << endl;

	// Get all sound hardware
	vector<wstring> devices = olcNoiseMaker<short>::Enumerate();

	// Print
	for (auto d : devices) wcout << "Found output devices: " << d << endl;


	// Create sound machine!!
	olcNoiseMaker<short> sound(devices[0], 44100, 1, 8, 512);


	int i = 0;
	cin >> i;

    return 0;
}