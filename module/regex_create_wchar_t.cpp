
#if defined(__cpp_lib_modules) || (defined(_MSC_FULL_VER) && (_MSC_FULL_VER >= 193933523))
#define BOOST_REGEX_USE_STD_MODULE
#endif

#ifndef BOOST_REGEX_USE_STD_MODULE
module;

#include <memory>

#endif

#ifndef BOOST_REGEX_DETAIL_NS
#define BOOST_REGEX_DETAIL_NS re_detail_600
#endif

module boost.regex;

#ifdef BOOST_REGEX_USE_STD_MODULE
import std;
#endif

namespace boost::detail {

   std::shared_ptr<BOOST_REGEX_DETAIL_NS::basic_regex_implementation<wchar_t, basic_regex<wchar_t>::traits_type> >
      create_implemenation(const wchar_t* p1, const wchar_t* p2, basic_regex<wchar_t>::flag_type f, std::shared_ptr<boost::regex_traits_wrapper<basic_regex<wchar_t>::traits_type> > ptraits)
   {
      return create_implemenation<wchar_t, basic_regex<wchar_t>::flag_type, basic_regex<wchar_t>::traits_type>(p1, p2, f, ptraits);
   }

}
