// Automatically generated by the Fast Binary Encoding compiler, do not modify!
// https://github.com/chronoxor/FastBinaryEncoding
// Source: simple.fbe
// Version: 1.8.0.0

#pragma once

#if defined(__clang__)
#pragma clang system_header
#elif defined(__GNUC__)
#pragma GCC system_header
#elif defined(_MSC_VER)
#pragma system_header
#endif

#include "fbe.h"

namespace simple {
using namespace FBE;
} // namespace simple

namespace FBE {
using namespace ::simple;
} // namespace FBE

namespace simple {

struct SimpleResponse;

struct SimpleRequest
{
    typedef SimpleResponse Response;

    FBE::uuid_t id;
    std::string Message;

    size_t fbe_type() const noexcept { return 1; }

    SimpleRequest();
    SimpleRequest(const FBE::uuid_t& arg_id, const std::string& arg_Message);
    SimpleRequest(const SimpleRequest& other) = default;
    SimpleRequest(SimpleRequest&& other) = default;
    ~SimpleRequest() = default;

    SimpleRequest& operator=(const SimpleRequest& other) = default;
    SimpleRequest& operator=(SimpleRequest&& other) = default;

    bool operator==(const SimpleRequest& other) const noexcept;
    bool operator!=(const SimpleRequest& other) const noexcept { return !operator==(other); }
    bool operator<(const SimpleRequest& other) const noexcept;
    bool operator<=(const SimpleRequest& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const SimpleRequest& other) const noexcept { return !operator<=(other); }
    bool operator>=(const SimpleRequest& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const SimpleRequest& value);

    void swap(SimpleRequest& other) noexcept;
    friend void swap(SimpleRequest& value1, SimpleRequest& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

namespace std {

template<>
struct hash<simple::SimpleRequest>
{
    typedef simple::SimpleRequest argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

} // namespace std

namespace simple {

struct SimpleResponse
{
    FBE::uuid_t id;
    uint32_t Length;
    uint32_t Hash;

    size_t fbe_type() const noexcept { return 2; }

    SimpleResponse();
    SimpleResponse(const FBE::uuid_t& arg_id, uint32_t arg_Length, uint32_t arg_Hash);
    SimpleResponse(const SimpleResponse& other) = default;
    SimpleResponse(SimpleResponse&& other) = default;
    ~SimpleResponse() = default;

    SimpleResponse& operator=(const SimpleResponse& other) = default;
    SimpleResponse& operator=(SimpleResponse&& other) = default;

    bool operator==(const SimpleResponse& other) const noexcept;
    bool operator!=(const SimpleResponse& other) const noexcept { return !operator==(other); }
    bool operator<(const SimpleResponse& other) const noexcept;
    bool operator<=(const SimpleResponse& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const SimpleResponse& other) const noexcept { return !operator<=(other); }
    bool operator>=(const SimpleResponse& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const SimpleResponse& value);

    void swap(SimpleResponse& other) noexcept;
    friend void swap(SimpleResponse& value1, SimpleResponse& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

namespace std {

template<>
struct hash<simple::SimpleResponse>
{
    typedef simple::SimpleResponse argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

} // namespace std

namespace simple {

struct SimpleReject
{
    FBE::uuid_t id;
    std::string Error;

    size_t fbe_type() const noexcept { return 3; }

    SimpleReject();
    SimpleReject(const FBE::uuid_t& arg_id, const std::string& arg_Error);
    SimpleReject(const SimpleReject& other) = default;
    SimpleReject(SimpleReject&& other) = default;
    ~SimpleReject() = default;

    SimpleReject& operator=(const SimpleReject& other) = default;
    SimpleReject& operator=(SimpleReject&& other) = default;

    bool operator==(const SimpleReject& other) const noexcept;
    bool operator!=(const SimpleReject& other) const noexcept { return !operator==(other); }
    bool operator<(const SimpleReject& other) const noexcept;
    bool operator<=(const SimpleReject& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const SimpleReject& other) const noexcept { return !operator<=(other); }
    bool operator>=(const SimpleReject& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const SimpleReject& value);

    void swap(SimpleReject& other) noexcept;
    friend void swap(SimpleReject& value1, SimpleReject& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

namespace std {

template<>
struct hash<simple::SimpleReject>
{
    typedef simple::SimpleReject argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

} // namespace std

namespace simple {

struct SimpleNotify
{
    std::string Notification;

    size_t fbe_type() const noexcept { return 4; }

    SimpleNotify();
    explicit SimpleNotify(const std::string& arg_Notification);
    SimpleNotify(const SimpleNotify& other) = default;
    SimpleNotify(SimpleNotify&& other) = default;
    ~SimpleNotify() = default;

    SimpleNotify& operator=(const SimpleNotify& other) = default;
    SimpleNotify& operator=(SimpleNotify&& other) = default;

    bool operator==(const SimpleNotify& other) const noexcept;
    bool operator!=(const SimpleNotify& other) const noexcept { return !operator==(other); }
    bool operator<(const SimpleNotify& other) const noexcept;
    bool operator<=(const SimpleNotify& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const SimpleNotify& other) const noexcept { return !operator<=(other); }
    bool operator>=(const SimpleNotify& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const SimpleNotify& value);

    void swap(SimpleNotify& other) noexcept;
    friend void swap(SimpleNotify& value1, SimpleNotify& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

namespace std {

template<>
struct hash<simple::SimpleNotify>
{
    typedef simple::SimpleNotify argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        return result;
    }
};

} // namespace std

namespace simple {

struct DisconnectRequest
{
    FBE::uuid_t id;

    size_t fbe_type() const noexcept { return 5; }

    DisconnectRequest();
    explicit DisconnectRequest(const FBE::uuid_t& arg_id);
    DisconnectRequest(const DisconnectRequest& other) = default;
    DisconnectRequest(DisconnectRequest&& other) = default;
    ~DisconnectRequest() = default;

    DisconnectRequest& operator=(const DisconnectRequest& other) = default;
    DisconnectRequest& operator=(DisconnectRequest&& other) = default;

    bool operator==(const DisconnectRequest& other) const noexcept;
    bool operator!=(const DisconnectRequest& other) const noexcept { return !operator==(other); }
    bool operator<(const DisconnectRequest& other) const noexcept;
    bool operator<=(const DisconnectRequest& other) const noexcept { return operator<(other) || operator==(other); }
    bool operator>(const DisconnectRequest& other) const noexcept { return !operator<=(other); }
    bool operator>=(const DisconnectRequest& other) const noexcept { return !operator<(other); }

    std::string string() const { std::stringstream ss; ss << *this; return ss.str(); }

    friend std::ostream& operator<<(std::ostream& stream, const DisconnectRequest& value);

    void swap(DisconnectRequest& other) noexcept;
    friend void swap(DisconnectRequest& value1, DisconnectRequest& value2) noexcept { value1.swap(value2); }
};

} // namespace simple

namespace std {

template<>
struct hash<simple::DisconnectRequest>
{
    typedef simple::DisconnectRequest argument_type;
    typedef size_t result_type;

    result_type operator() (const argument_type& value) const
    {
        result_type result = 17;
        result = result * 31 + std::hash<decltype(value.id)>()(value.id);
        return result;
    }
};

} // namespace std

namespace simple {

} // namespace simple
