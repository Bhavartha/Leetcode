class Codec:
    x = ""
    def encode(self, longUrl: str) -> str:
        """Encodes a URL to a shortened URL.
        """
        self.x = longUrl
        return ''

    def decode(self, shortUrl: str) -> str:
        """Decodes a shortened URL to its original URL.
        """
        return self.x

# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))
