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

		\clef "treble_8"

		\time 4/4
		\key e \minor
		r2 r4 b, 8. b, 16  |
		g 2 r8 r16 e e 8. e 16  |
		dis 4 fis 2 b, 8. b, 16  |
		a 2 r8 r16 b, b, 8. b, 16  |
%% 5
		b 4 a g e 8. e 16  |
		d 4 fis 2 d 8. d 16  |
		c 4 e 2 c 8. c 16  |
		\time 2/4
		d 4 c  |
		\time 4/4
		b, 1  |
%% 10
		r4 r8 r16 b, b, 8. b, 16 b, 8. b, 16  |
		b 2 b  |
		r4 b 8. b 16 b 4 c' 8. b 16  |
		d' 2 d'  |
		r4 d' 8. d' 16 d' 4 e' 8. d' 16  |
%% 15
		c' 2 c' 4. c' 8  |
		c' 8 c' 4 -\staccato c' 8 d' 4 c'  |
		b 1  |
		r4 b, 8. b, 16 b, 4 b, 8. b, 16  |
		b 2 b  |
%% 20
		r4 r8 b b 8. b 16 c' 8. b 16  |
		d' 2 d'  |
		r4 d' 8. d' 16 d' 4 e' 8. d' 16  |
		c' 2 c' 4. c' 8  |
		c' 4 -\staccato r8 c' d' 4 c'  |
%% 25
		b 1  |
		r2 r4 b, 8. b, 16  |
		g 2 r8 r16 e e 8. e 16  |
		dis 4 fis 2 b, 8. b, 16  |
		a 2 r8 r16 b, b, 8. b, 16  |
%% 30
		b 4 a g e 8. e 16  |
		d 4 fis 2 d 8. d 16  |
		c 4 e 2 c 8. c 16  |
		\time 2/4
		d 4 c  |
		\time 4/4
		b, 1  |
%% 35
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
		Ha -- cia ti, mo -- ra -- da san -- ta,
		ha -- cia ti, tie -- rra del sal -- va -- dor.
		Pe -- re -- gri -- nos, ca -- mi -- nan -- tes,
		va -- mos ha -- cia ti.

		Ve -- ni -- mos a tu me -- sa, se -- lla -- re -- mos tu pac -- to,
		co -- me -- re -- mos tu car -- ne, tu san -- gre nos lim -- pia -- rá.
		Rei -- na -- re -- mos con -- ti -- go en tu mo -- ra -- da san -- ta,
		be -- be -- re -- mos tu san -- gre, tu fe nos sal -- va -- rá.

		Ha -- cia ti, mo -- ra -- da san -- ta,
		ha -- cia ti, tie -- rra del sal -- va -- dor.
		Pe -- re -- gri -- nos, ca -- mi -- nan -- tes,
		va -- mos ha -- cia ti.
	}
>>
