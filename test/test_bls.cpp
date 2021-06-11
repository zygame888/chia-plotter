#include <bls.hpp>
#include <sodium.h>
#include <string>



inline
std::vector<uint8_t> hex_to_bytes(const std::string& hex)
{
	std::vector<uint8_t> result;
	for (size_t i = 0; i < hex.length(); i += 2) {
		const std::string byteString = hex.substr(i, 2);
		result.push_back(::strtol(byteString.c_str(), NULL, 16));
	}
	return result;
}


void handle_eptr(std::exception_ptr eptr) // passing by value is ok
{
	try {
		if (eptr) {
			std::rethrow_exception(eptr);
		}
	}
	catch (const std::exception& e) {
		std::cout << "Caught exception \"" << e.what() << "\"\n";
	}
}

int main(int argc, char** argv)
{
	std::exception_ptr eptr;
	try {
		std::string pool_key_str = "99b15d19107cd4a1ffbe8248204b089ab4f6b4d61184afb5faab457ec2ace6908069cad018d5f9cf6fab0b78b82fcab0";
		const auto pool_key_bytes = hex_to_bytes(pool_key_str);
		const bls::G1Element pool_key = bls::G1Element::FromByteVector(pool_key_bytes);
		std::cout << "Pool Public Key:   " << bls::Util::HexStr(pool_key.Serialize()) << std::endl;
	}
	catch (...) {
		eptr = std::current_exception(); // capture
	}
	handle_eptr(eptr);
}