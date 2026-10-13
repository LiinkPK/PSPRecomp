/* Entry 0x088C2F1C | file offset 0x000BFEF4 | FUN_088c2f1c | bytes 124 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089d753c. Boundary still requires runtime validation. */

undefined4 FUN_088c2f1c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  
  param_1[1] = 1;
  pcVar3 = 
  "\x01\x03\x05\a\t\v\r\x0f\x11\x13\x01\x03\x05\a\t\v\r\x0f\x11\x13\x15\x18\x1a\x1b\x1c\x1d\x1e\x1f\x02\x04\x06\b\n\f\x0e\x10\x12\x14\x16\x19 "
  ;
  uVar1 = 0;
  do {
    if (*(int *)(param_2 + *pcVar3 * 200 + 0xfe38) == 0) {
      *param_1 = 0;
      return 0;
    }
    uVar2 = uVar1 + 1;
    pcVar3 = (char *)((int)&PTR_DAT_089cbb71 + uVar1);
    uVar1 = uVar2;
  } while (uVar2 < 10);
  *param_1 = 1;
  return 1;
}

