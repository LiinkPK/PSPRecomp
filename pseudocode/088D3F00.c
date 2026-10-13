/* Entry 0x088D3F00 | file offset 0x000D0ED8 | FUN_088d3f00 | bytes 124 */

void FUN_088d3f00(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = *param_3;
  while (sVar1 != -1) {
    if (param_3[2] != -1) {
      FUN_088d3ae8(param_2,param_3[2],param_3[3],sVar1);
    }
    param_3 = param_3 + 4;
    sVar1 = *param_3;
  }
  return;
}

