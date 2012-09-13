\context Staff = "violin" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"

		\key fs \minor
		R2*21  |
		fs'2:16  |
		fs'2:16  |
		fs'2:16  |
%% 25
		fs'2:16  |
		fs'2:16  |
		e'2:16  |
		\time 4/4
		fs' 1  |
		R1*3  |
		\key e \major
		gs' 1  |
		gs' 1  |
		a' 1  |
%% 35
		fs' 2. ( gs' 4 )  |
		a' 1  |
		gs' 1  |
		fs' 1  |
		fs' 2. ( e' 4 )  |
%% 40
		e' 1  |
		R1  |
		\key fs \minor
		R1*2  |
		fs' 1  |
%% 45
		fs' 4. c'' 8 ~ c'' 2  |
		cs'' 1  |
		d'' 1  |
		cs'' 4 ( a' 8 fs' 4. ) fs' 4  |
		gs' 2. a' 4  |
%% 50
		fs' 1  |
		R1  |
		r4 fs' fs' fs'  |
		c'' 1  |
		r4 fs' fs' fs'  |
%% 55
		b' 1  |
		r4 fs' fs' fs'  |
		e' 1  |
		r4 fs' 2.  |
		e' 1  |
%% 60
		fs' 1  |
		fs' 4 gs' 8 a' b' 4. r8  |
		\key e \major
		gs' 1  |
		gs' 1  |
		a' 1  |
%% 65
		fs' 2. ( gs' 4 )  |
		a' 1  |
		gs' 1  |
		fs' 1  |
		fs' 2. ( e' 4 )  |
%% 70
		e' 1  |
		R1*11  |
		gs' 1  |
		gs' 1  |
		a' 1  |
%% 85
		fs' 2. ( gs' 4 )  |
		a' 1  |
		gs' 1  |
		fs' 1  |
		fs' 2. ( e' 4 )  |
%% 90
		e' 1  |
		R1*3  |
	}
>>
