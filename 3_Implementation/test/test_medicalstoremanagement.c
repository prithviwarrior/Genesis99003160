#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include <medicalstoremanagement.h>
#define PROJECT_NAME "MEDICALSTOREMANAGEMENTSYSTEM"

/* Prototypes for all the test functions */
void test_PurchaseMedicine(void);
void test_EnterInfoAboutMedicine(void);
void test_KnowInfoAboutMedicine(void);
void test_StockOfMedicine(void);
void test_AddMedicineinStore(void);
void test_DeleteMedicineinStore(void);
void test_ChangeMedicineDetails(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

/* Add your test functions in this format for testing*/
  CU_add_test(suite, "patientanalysis", test_do_patientanalysis);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
/* Write all the test functions */
void test_do_patientanalysis(void) {
  CU_ASSERT_EQUAL(1,patientanalysis("fever"));

  /* Dummy fail*/
}


