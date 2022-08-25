find .  -name "*.sh" -exec basename -s .sh {} \; | sed 's/\.sh//'
