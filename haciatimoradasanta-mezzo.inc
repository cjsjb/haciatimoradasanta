\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"

		\time 4/4
		\key e \minor
		r2 r4 b 8. b 16  |
		g' 2 r8 r16 e' e' 8. e' 16  |
		dis' 4 dis' 2 b 8. b 16  |
		e' 2 r8 r16 e' e' 8. e' 16  |
%% 5
		g' 4 fis' e' e' 8. e' 16  |
		d' 4 d' 2 d' 8. d' 16  |
		c' 4 c' 2 c' 8. c' 16  |
		\time 2/4
		g 4 a  |
		\time 4/4
		b 1  |
%% 10
		r4 r8 r16 b b 8. b 16 b 8. b 16  |
		g' 2 g'  |
		r4 g' 8. g' 16 g' 4 a' 8. g' 16  |
		fis' 2 fis'  |
		r4 fis' 8. fis' 16 fis' 4 g' 8. fis' 16  |
%% 15
		e' 2 e' 4. e' 8  |
		e' 8 e' 4 -\staccato e' 8 fis' 4 e'  |
		dis' 1  |
		r4 b 8. b 16 b 4 b 8. b 16  |
		g' 2 g'  |
%% 20
		r4 r8 g' g' 8. g' 16 a' 8. g' 16  |
		fis' 2 fis'  |
		r4 fis' 8. fis' 16 fis' 4 g' 8. fis' 16  |
		e' 2 e' 4. e' 8  |
		e' 4 -\staccato r8 e' fis' 4 e'  |
%% 25
		dis' 1  |
		r2 r4 b 8. b 16  |
		g' 2 r8 r16 e' e' 8. e' 16  |
		dis' 4 dis' 2 b 8. b 16  |
		e' 2 r8 r16 b b 8. b 16  |
%% 30
		g' 4 fis' e' e' 8. e' 16  |
		d' 4 d' 2 d' 8. d' 16  |
		c' 4 c' 2 c' 8. c' 16  |
		\time 2/4
		g 4 a  |
		\time 4/4
		b 1  |
%% 35
		R1  |
		\bar "|."
	}

	\lyricsto "voz-mezzosoprano" \new Lyrics \lyricmode {
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
