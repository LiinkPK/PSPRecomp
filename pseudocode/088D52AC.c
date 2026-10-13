/* Entry 0x088D52AC | file offset 0x000D2284 | FUN_088d52ac | bytes 108 */

void FUN_088d52ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  uVar1 = FUN_0885c6cc(param_2,param_3,0x80,0,1,0);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_088a18b0(DAT_089d6c88,100,0);
  DAT_09b69878 = 0;
  DAT_09b6987c = 0;
  return;
}

