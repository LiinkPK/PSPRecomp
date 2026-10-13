/* Entry 0x0895415C | file offset 0x00151134 | FUN_0895415c | bytes 128 */

void FUN_0895415c(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x46) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x47);
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        uVar2 = 2;
        goto LAB_089541b0;
      }
    }
    else if (bVar1 < 3) {
      uVar2 = 3;
      goto LAB_089541b0;
    }
    uVar2 = 1;
  }
LAB_089541b0:
  FUN_08953cc0((float)*(ushort *)(param_1 + 0x44),param_2 + 0x10,param_1,param_1 + 0x10,param_2,
               uVar2);
  return;
}

