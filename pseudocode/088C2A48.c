/* Entry 0x088C2A48 | file offset 0x000BFA20 | FUN_088c2a48 | bytes 204 */

bool FUN_088c2a48(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 999999999;
  pcVar2 = 
  "\x01\x03\x05\a\t\v\r\x0f\x11\x13\x15\x18\x1a\x1b\x1c\x1d\x1e\x1f\x02\x04\x06\b\n\f\x0e\x10\x12\x14\x16\x19 "
  ;
  iVar3 = 0;
  do {
    iVar1 = FUN_088b2b8c(param_2 + *pcVar2 * 200 + 0xfdf8);
    if (iVar1 < iVar4) {
      iVar4 = iVar1;
    }
    iVar1 = iVar3 + 1;
    pcVar2 = (char *)((int)&PTR_DAT_089cbb7b + iVar3);
    iVar3 = iVar1;
  } while (iVar1 < 0x1f);
  *param_1 = iVar4;
  iVar3 = *param_3;
  param_1[1] = iVar3;
  return iVar3 <= iVar4;
}

