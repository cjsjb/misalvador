\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"

		\key fs \minor
		R2*5  |
		r4 r8 cs'' 16 cs''  |
		cs'' 8. fs'' cs'' 8  |
		c'' 8. fs'' r16 fs'' 32 gs''  |
		a'' 16 \times 2/3 { gs'' fs'' e'' } cs'' 8 r16 cs'' cs''  |
%% 10
		d'' 8. fs'' gs'' 8  |
		a'' 8 ( gs'' 16 ) fs'' 8 r16 fs'' fs''  |
		e'' 8. b' cs'' 16 ( b' )  |
		a' 4 r  |
		fs' 2 ~  |
%% 15
		fs' 2  |
		fs' 16 gs' a' b' c'' 4  |
		cs'' 2  |
		d'' 2  |
		cs'' 8 a' 16 fs' 8. fs' 8  |
%% 20
		gs' 4. a' 8  |

		\time 4/4
		fs' 1  |
		R1*3  |
%% 25
		\key e \major
		R1*10  |
		\key fs \minor
		R1*20  |
		\key e \major
		R1*12  |
	} % Voice
	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		"Me en" -- con -- tra -- ba per -- di -- do,
		no sa -- bí a qué ha -- cer
		en mi mun -- do som -- brí __ o,
		ca -- re -- cí -- a de __ fe.
	}
>>
