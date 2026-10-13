/* Entry 0x08925624 | file offset 0x001225FC | FUN_08925624 | bytes 172 */

void FUN_08925624(uint *param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 & 1) == 0) {
    *param_1 = *param_1 | 1;
    if ((*(char *)(param_1[1] + 0xd) < '\x02') && ('\0' < *(char *)(param_1[1] + 0xd))) {
      if (param_2 == '\0') {
        uVar1 = FUN_08899300();
        FUN_088983c8(uVar1,(int)*(char *)(param_1[1] + 0xc),1);
      }
      else {
        FUN_089259bc(param_1,0x1e);
      }
    }
  }
  return;
}

