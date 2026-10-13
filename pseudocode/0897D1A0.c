/* Entry 0x0897D1A0 | file offset 0x0017A178 | FUN_0897d1a0 | bytes 152 */

void FUN_0897d1a0(undefined4 param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((*param_2 & 1) == 0) {
    bVar1 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar2 = *param_4;
    FUN_089860ec(*(float *)(param_3 + 0x60) + (float)param_4[1],
                 *(float *)(param_3 + 100) + (float)param_4[2],uVar2);
    FUN_08986204(uVar2,param_2);
  }
  return;
}

