scales = {
	"major": ["M", "M", "M", "P", "P", "M", "M"],
	"minor": ["M", "M", "m", "P", "P", "m", "m"]
}

notes = [
	{
		"M": 0
	},
	{
		"m": 1,
		"M": 2
	},
	{
		"m": 3,
		"M": 4
	},
	{
		"D": 4,
		"P": 5,
		"A": 6
	},
	{
		"D": 6,
		"P": 7,
		"A": 8
	},
	{
		"m": 8,
		"M": 9
	},
	{
		"m": 10,
		"M": 11
	}
]

fundammental = 55

for name, degrees in scales.items():
	for octave in range(6):
		for i in range(len(degrees)):
			quality = degrees[i]
			note = notes[i][quality]
			half_step = note + 12 * octave
			frequency = fundammental * (2 ** (float(half_step) / 12.0))
			print("#define " + name + str(octave) + "_" + str(i + 1) + " " + str(int(frequency)))
