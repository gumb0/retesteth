#pragma once
#include "Base/AccountBase.h"
#include <retesteth/dataObject/DataObject.h>
#include <retesteth/dataObject/SPointer.h>
using namespace dataobject;
using namespace test::teststruct;

namespace test
{
namespace teststruct
{
// Ethereum account description
// AccountIncomplete is a short version described in expect section
// It can be missing some of the fields defined
struct AccountIncomplete : AccountBase
{
    AccountIncomplete(spDataObject&);
    void setBalance(VALUE const& _balance) { m_balance = spVALUE(new VALUE(_balance)); }
    spDataObject const& asDataObject() const override;
    AccountType type() const override { return AccountType::Incomplete; }
};

typedef GCP_SPointer<AccountIncomplete> spAccountIncomplete;


}  // namespace teststruct
}  // namespace test
