\context Staff = "cello" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Cello"
	\set Staff.shortInstrumentName = "C."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-cello" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "bass"

		\key fs \minor
		R2*4  |
%% 5
		fs 2 ~  |
		fs 2  |
		fs 16 ( gs a b c' 4 )  |
		cs' 2  |
		d' 2  |
%% 10
		cs' 8 ( a 16 fs 8. ) fs 8  |
		gs 4. a 8  |
		fs 2  |
		R2*9  |
		fs, 2  |
		c 2  |
		fs, 2  |
%% 25
		b, 2  |
		fs, 2  |
		e, 2  |
		\time 4/4
		fs, 1  |
		e, 1  |
%% 30
		fs, 1  |
		b, 2. r4  |
		\key e \major
		R1*10  |
		\key fs \minor
		R1*20  |
		\key e \major
		R1*32  |
	}
>>
