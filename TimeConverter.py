from datetime import timedelta
def time_conversion(hours=0, minutes=0, seconds=0):
    """
    Convert hours, minutes, and seconds to total seconds and back.
    Returns:
        total_seconds (int): total number of seconds
        h, m, s (int, int, int): equivalent hours, minutes, seconds
    """
    # Convert to total seconds
    total_seconds = hours * 3600 + minutes * 60 + seconds

    # Convert back using timedelta
    td = timedelta(seconds=total_seconds)
    h, remainder = divmod(td.seconds, 3600)
    m, s = divmod(remainder, 60)

    return total_seconds, (h, m, s)

# Example usage:
total, (h, m, s) = time_conversion(4, 50, 20)
print(f"Total seconds: {total}")
print(f"Converted back: {h}h {m}m {s}s")