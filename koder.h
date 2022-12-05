#ifndef koder_h
#define koder_h

#include <cstdint>

namespace packet_defs {
	constexpr uint16_t max_payload_len = 1024; 
	constexpr uint16_t header_len = 4;
	constexpr uint16_t crc_mod = 256;

	typedef struct {
		uint16_t start;
		uint16_t type;
		uint16_t len; //len is a length of the whole packet: data len + header len
		uint16_t crc;
	}packet_header_t;

	typedef struct {
		packet_header_t header;
		uint16_t* data;
	}data_packet_t;
}

class packet {
private:
	packet_defs::data_packet_t data_packet;

public:
	packet& operator=(packet&) = delete;
	packet(packet&) = delete;

	packet(uint16_t start, uint16_t type, uint16_t len, const char * raw_data);
	~packet();
	packet_defs::data_packet_t& get_packet();
};

namespace coder_defs {
	constexpr uint8_t xor_const_cipher = 0x01;
	constexpr uint8_t xor_stream_cipher = 0x02;
	constexpr uint8_t homofon_cipher = 0x04;
};

class coder {
private:
	uint8_t coder_flags;

public:
	coder(uint8_t coder_flags);
	const packet_defs::data_packet_t& get_coded_packet(packet_defs::data_packet_t& p) const;
};

#endif