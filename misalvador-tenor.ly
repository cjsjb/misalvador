% This LilyPond file was generated by Rosegarden 11.11.11
\include "english.ly"
\version "2.10.0"
\header {
	composer = "J. Castañeda, D. Cervantes, P. Valdés"
	copyright = "Copyright © 2012"
	title = "Mi salvador"
	instrument = "Tenor"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 2/4 \skip 2*27
	\time 4/4 \skip 1*66
}
globalTempo = {
	\tempo 4 = 56  \skip 2*27
	\tempo 4 = 116 \skip 1*66
}

\include "misalvador-guitarra.def"
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "misalvador-acordes.inc"
		\new StaffGroup <<
			\include "misalvador-tenor.inc"
		>>
	>>
	\layout { }
}
