/* Entry 0x08819F1C | file offset 0x00016EF4 | FUN_08819f1c | bytes 104 */

undefined4 FUN_08819f1c(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  FUN_08819f00();
  if ((int)param_2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *param_1 = *param_1 & 0xfffe0001 | (param_2 & 0xffff) << 1 | 1;
    uVar1 = 0;
  }
  return uVar1;
}

