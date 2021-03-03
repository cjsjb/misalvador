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
		fs, 2 ~  |
		fs, 2  |
		fs, 16 ( gs, a, b, c 4 )  |
		cs 2  |
		d 2  |
%% 10
		cs 8 ( a, 16 fs, 8. ) fs, 8  |
		gs, 4. a, 8  |
		fs, 2  |
		R2*9  |
		fs2:16  |
		fs2:16  |
		fs2:16  |
%% 25
		fs2:16  |
		fs2:16  |
		e2:16  |
		\time 4/4
		cs 1  |
		b, 1  |
%% 30
		cs 1  |
		b, 4 b, b, r  |
		\key e \major
		e, 1  |
		gs, 1  |
		a, 1  |
%% 35
		b, 2. b, 4  |
		cs 1  |
		b, 1  |
		cs 1  |
		b, 2. a, 4  |
%% 40
		a, 1  |
		R1  |
		\key fs \minor
		a, 8 ( b, ) cs ( e ) fs 2  |
		r8 fs a b cs' b a fs  |
		fs 1  |
%% 45
		fs 1  |
		fs 2 r8 fs a fs  |
		b 2 r8 fs a fs  |
		fs 1  |
		e 1  |
%% 50
		fs 2. ~ fs 4\glissando  |
		a 2. a 4\glissando  |
		fs 1   |
		fs 1  |
		fs 1  |
%% 55
		b, 2. a, 8 b,  |
		cs 4 ( b, 8 ) a, 4 a, 8 a, 4  |
		gs, 2. e, 4  |
		fs, 1  |
		e, 1  |
%% 60
		fs, 1  |
		b, 4 b, b, r  |
		\key e \major
		e, 1  |
		c 1  |
		cs 1  |
%% 65
		b, 2. b, 4  |
		cs 1  |
		b, 1  |
		cs 1  |
		b, 2. a, 4  |
%% 70
		a, 1  |
		R1*3  |
		b, 4 cs e fs  |
%% 75
		e 1  |
		e 1  |
		cs 1  |
		ds 2. r4  |
		ds 1  |
%% 80
		e 1  |
		b, 2. r4  |
		b, 1  |
		c 1  |
		cs 1  |
%% 85
		ds 1  |
		cs 4. a, 8 ~ a, 2  |
		b, 4. gs, 8 ~ gs, 2  |
		cs 4. a, 8 ~ a, 2  |
		b, 1  |
%% 90
		a, 1  |
		a, 1  |
		b, 1  |
		R1  |
		\bar "|."
	}
>>
