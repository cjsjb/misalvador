\context Staff = "soprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Soprano"
	\set Staff.shortInstrumentName = "S."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-soprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 2/4
		\clef "treble"

		\key fs \minor
		R2*12  |
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
		d' 8. fs' gs' 16 gs'  |
		a' 8 ( gs' 16 ) fs' 8 r16 fs' 8  |
%% 20
		e' 8. b cs' 16 b  |

		\time 4/4
		a 1  |
		R1*2  |
		r2 r4 e' 8 fs'  |
%% 25
		\key e \major
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		cs'' 8 b' 16 b' 8 a' 16 b' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
%% 30
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 4 gs' gs' fs'  |
		e' 1  |
		R1  |
%% 35
		\key fs \minor
		R1  |
		r2 r4 cs'  |
		cs' 4. fs' cs' 8 cs'  |
		c' 4. fs' r8 r32 gs' 16.  |
		a' 8 \times 2/3 { gs' fs' e' } cs' 4 r8 cs' 4  |
%% 40
		d' 4. fs' fs' 8 gs'  |
		a' 4 ( gs' 8 ) fs' 4 r8 fs' 4  |
		e' 4. b cs' 8 b  |
		a 1  |
		R1  |
%% 45
		cs' 4. fs' cs' 8 cs'  |
		c' 4. fs' r8 r32 gs' 16.  |
		a' 8 \times 2/3 { gs' fs' e' } cs' 4 r8 cs' 4  |
		d' 4. fs' fs' 8 gs'  |
		a' 4 ( gs' 8 ) fs' 4 r8 fs' fs'  |
%% 50
		e' 4. b cs' 8 b  |
		a 1  |
		R1*2  |
		r2 r4 e' 8 fs'  |
%% 55
		\key e \major
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		cs'' 8 b' 16 b' 8 a' 16 b' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
%% 60
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 4 gs' gs' fs'  |
		e' 1  |
		e' 2 gs' 8 fs' e' gs' ~  |
%% 65
		gs' 4 gs' gs' 8 fs' e' a' ~  |
		a' 4. r8 a' gs' fs' a' ~  |
		a' 4 gs' fs' e'  |
		e' 2 gs' 8 fs' e' gs' ~  |
		gs' 4. r8 gs' fs' e' fs' ~  |
%% 70
		fs' 4. r8 a' gs' fs' fs' ~  |
		fs' 2. r4  |
		b' 1  |
		c'' 1  |
		b' 2 ~ b' 8 r e' fs'  |
%% 75
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		cs'' 8 b' 16 b' 8 a' 16 b' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
%% 80
		a' 8 gs' 16 gs' 8 fs' 16 gs' 4 r8 e' fs'  |
		a' 8 gs' 16 gs' 8 fs' 16 fs' 4 e' 8 e' fs'  |
		a' 4 gs' gs' fs'  |
		a' 1  |
		r4 a' a' a'  |
%% 85
		gs' 1  |
		R1  |
		\bar "|."
	} % Voice
	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
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
		e -- res tú mi sal -- va -- dor.

		Hoy pue -- do sen -- tir __
		que vi -- ves en mí, __
		Dios to -- do -- po __ de -- ro -- so.
		Hoy pue -- do re -- ír, __
		vuel -- "vo a" -- vi -- vir, __
		has si -- do mi __ sal -- va -- dor. __

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
