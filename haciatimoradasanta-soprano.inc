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

		\clef "treble"

		\time 4/4
		\key e \minor
		r2. b 8 b  |
		g' 2 r8 e' e' e'  |
		dis' 4 fis' 2 b 8 b  |
		a' 2 r8 b b b  |
%% 5
		b' 4 a' g' e' 8 e'  |
		d' 4 fis' 2 d' 8 d'  |
		c' 4 e' 2 c' 8 c'  |
		\time 2/4
		d' 4 c'  |
		\time 4/4
		b 1  |
%% 10
		r4. b 8 b b b b  |
		b' 2 b'  |
		r4 b' 8 b' b' 4 c'' 8 b'  |
		a' 2 a'  |
		r4 a' 8 a' a' 4 b' 8 a'  |
%% 15
		g' 2 g' 4. g' 8  |
		g' 8 g' 4 -\staccato g' 8 a' 4 g'  |
		fis' 1  |
		r4 b 8 b b 4 b 8 b  |
		b' 2 b'  |
%% 20
		r4. b' 8 b' b' c'' b'  |
		a' 2 a'  |
		r4 a' 8 a' a' 4 b' 8 a'  |
		g' 2 g' 4. g' 8  |
		g' 4 -\staccato r8 g' a' 4 g'  |
%% 25
		fis' 1  |
		r2 r4 b 8 b  |
		g' 2 r8 e' e' e'  |
		dis' 4 fis' 2 b 8 b  |
		a' 2 r8 b b b  |
%% 30
		b' 4 a' g' e' 8 e'  |
		d' 4 fis' 2 d' 8 d'  |
		c' 4 e' 2 c' 8 c'  |
		\time 2/4
		d' 4 c'  |
		\time 4/4
		b 1  |
%% 35
		r1  |
		\bar "|."
	}

	\lyricsto "voz-soprano" \new Lyrics \lyricmode {
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
