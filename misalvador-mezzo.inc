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
		R1*19  |
		r2 r4 e'' 8 fs''  |
%% 55
		\key e \major
		a'' 8 gs'' 16 gs'' 8 fs'' 16 fs'' 4 e'' 8 e'' fs''  |
		a'' 8 gs'' 16 gs'' 8 fs'' 16 gs'' 4 r8 e'' fs''  |
		a'' 8 gs'' 16 gs'' 8 fs'' 16 fs'' 4 e'' 8 e'' fs''  |
		cs''' 8 b'' 16 b'' 8 a'' 16 b'' 4 r8 e'' fs''  |
		a'' 8 gs'' 16 gs'' 8 fs'' 16 fs'' 4 e'' 8 e'' fs''  |
%% 60
		a'' 8 gs'' 16 gs'' 8 fs'' 16 gs'' 4 r8 e'' fs''  |
		a'' 8 gs'' 16 gs'' 8 fs'' 16 fs'' 4 e'' 8 e'' fs''  |
		a'' 4 gs'' gs'' fs''  |
		e'' 1  |
		r4 e'' e'' e''  |
%% 65
		e'' 1  |
		R1  |
	} % Voice
	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		"Me en" -- con -- tra -- ba per -- di -- do,
		no sa -- bí a qué ha -- cer
		en mi mun -- do som -- brí __ o,
		ca -- re -- cí -- a de __ fe.

		_ _ _ _ _ _ _ _
		_ _ _ _ _ _ _

		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú mi sal -- va -- dor.
		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú mi sal -- va -- dor,
		mi sal -- va -- dor.
	}
>>
