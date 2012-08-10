\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble_8"

		\key fs \minor
		R2*5  |
		r4 r8 cs' 16 cs'  |
		cs' 8. fs' cs' 8  |
		c' 8. fs' r16 fs' 32 gs'  |
		a' 16 \times 2/3 { gs' fs' e' } cs' 8 r16 cs' cs'  |
%% 10
		d' 8. fs' gs' 8  |
		a' 8 ( gs' 16 ) fs' 8 r16 fs' fs'  |
		e' 8. b cs' 16 ( b )  |
		a 4 r  |
		r4 r8 cs'  |
%% 15
		cs' 8. fs' cs' 16 cs'  |
		c' 8. fs' r16 fs' 32 gs'  |
		a' 16 \times 2/3 { gs' fs' e' } cs' 8 r16 cs' 8  |
		d' 8. d' d' 16 d'  |
		cs' 8 ( cs' 16 ) cs' 8 r16 a' 8  |
%% 20
		gs' 8. gs' fs' 16 fs'  |

		\time 4/4
		a' 1  |
		R1*2  |
		r2 r4 e' 8 e'  |
%% 25
		\key e \major
		e' 8 e' 16 e' 8 e' 16 e' 4 e' 8 e' e'  |
		ds' 8 ds' 16 ds' 8 ds' 16 ds' 4 r8 ds' ds'  |
		cs' 8 cs' 16 cs' 8 cs' 16 cs' 4 cs' 8 cs' cs'  |
		ds' 8 ds' 16 ds' 8 ds' 16 ds' 4 r8 ds' ds'  |
		e' 8 e' 16 e' 8 e' 16 e' 4 e' 8 e' e'  |
%% 30
		e' 8 e' 16 e' 8 e' 16 e' 4 r8 e' e'  |
		cs' 8 cs' 16 cs' 8 cs' 16 cs' 4 cs' 8 cs' cs'  |
		b 4 b b b  |
		cs' 1  |
		R1  |
%% 35
		\key fs \minor
		R1  |
		r2 r4 cs'  |
		cs' 4. fs' cs' 8 cs'  |
		c' 4. fs' r8 r32 gs' 16.  |
		a' 8 \times 2/3 { gs' fs' e' } cs' 4 r8 cs' 4  |
%% 40
		d' 4. d' d' 8 d'  |
		cs' 4 ( cs' 8 ) cs' 4 r8 cs' 4  |
		b 4. b cs' 8 b  |
		cs' 1  |
		R1  |
%% 45
		cs' 4. fs' cs' 8 cs'  |
		c' 4. fs' r8 r32 gs' 16.  |
		a' 8 \times 2/3 { gs' fs' e' } cs' 4 r8 cs' 4  |
		d' 4. d' d' 8 d'  |
		cs' 4 ( cs' 8 ) cs' 4 r8 a' a'  |
%% 50
		gs' 4. gs' a' 8 gs'  |
		a' 1  |
		R1*2  |
		r2 r4 e' 8 e'  |
%% 55
		\key e \major
		e' 8 e' 16 e' 8 e' 16 e' 4 e' 8 e' e'  |
		ds' 8 ds' 16 ds' 8 ds' 16 ds' 4 r8 ds' ds'  |
		cs' 8 cs' 16 cs' 8 cs' 16 cs' 4 cs' 8 cs' cs'  |
		ds' 8 ds' 16 ds' 8 ds' 16 ds' 4 r8 ds' ds'  |
		e' 8 e' 16 e' 8 e' 16 e' 4 e' 8 e' e'  |
%% 60
		e' 8 e' 16 e' 8 e' 16 e' 4 r8 e' e'  |
		cs' 8 cs' 16 cs' 8 cs' 16 cs' 4 cs' 8 cs' cs'  |
		b 4 r r2  |
		r4 cs' cs' cs'  |
		c' 1 (  |
%% 65
		b 1 )  |
		R1  |
	}
	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		"Me en" -- con -- tra -- ba per -- di -- do,
		no sa -- bí a qué ha -- cer
		en mi mun -- do som -- brí __ o,
		ca -- re -- cí -- a de __ fe.

		Te -- ní -- a mu -- chas du -- das,
		no po -- dí -- a más se -- guir.
		De ti me pla -- ti -- ca __ ban,
		y lue -- go te sen -- tí.

		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú mi sal -- va -- dor.
		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú mi sal -- va -- dor.

		A -- ho -- ra "que he" vi -- vi -- do
		tu fe y "tu hu" -- mil -- dad,
		qui -- sie -- "ra es" -- tar con -- ti __ go
		has -- ta "la e" -- ter -- ni -- dad.

		E -- res el ca -- mi -- no,
		la vi -- "da y" la ver -- dad.
		Tú lle -- nas mi des -- ti __ no;
		en mi vi -- "da es" -- ta -- bas ya.

		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú mi sal -- va -- dor.
		Es -- cu -- chas -- te mis ple -- ga -- rias,
		a -- ten -- dis -- te mi cla -- mor,
		me co -- bi -- jas con tus a -- las,
		e -- res tú...
		mi sal -- va -- dor. __
	}
>>
