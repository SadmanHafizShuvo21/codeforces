fun generatePassword(a: Int, b: Int, c: Int): String {
    val digits = "0123456789"
    val upper = "ZYXWVUTSRQPONMLKJIHGFEDCBA"
    val lower = "abcdefghijklmnopqrstuvwxyz"

    val sb = StringBuilder()
    var di = 0
    var ui = 0
    var li = 0

    var aCount = a
    var bCount = b
    var cCount = c

    while (aCount + bCount + cCount > 0) {
        if (aCount > 0 && (sb.isEmpty() || sb.last() != digits[di])) {
            sb.append(digits[di])
            di = (di + 1) % 10
            aCount--
        }
        if (bCount > 0 && (sb.isEmpty() || sb.last() != upper[ui])) {
            sb.append(upper[ui])
            ui = (ui + 1) % 26
            bCount--
        }
        if (cCount > 0 && (sb.isEmpty() || sb.last() != lower[li])) {
            sb.append(lower[li])
            li = (li + 1) % 26
            cCount--
        }
    }

    return sb.toString()
}

fun main() {
    val t = readln().toInt()
    repeat(t) {
        val (a, b, c) = readln().split(" ").map { it.toInt() }
        println(generatePassword(a, b, c))
    }
}