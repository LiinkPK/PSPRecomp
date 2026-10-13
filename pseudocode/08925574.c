/* Entry 0x08925574 | file offset 0x0012254C | FUN_08925574 | bytes 176 */

void FUN_08925574(uint *param_1,char param_2)

{
  undefined4 uVar1;
  
  if ((*param_1 & 1) != 0) {
    *param_1 = *param_1 & 0xfffffffe;
    if ((*(char *)(param_1[1] + 0xd) < '\x02') && ('\0' < *(char *)(param_1[1] + 0xd))) {
      if (param_2 == '\0') {
        uVar1 = FUN_08899300();
        FUN_088983c8(uVar1,(int)*(char *)(param_1[1] + 0xc),0);
      }
      else {
        FUN_08925a58(param_1,0x1e);
      }
    }
  }
  return;
}

