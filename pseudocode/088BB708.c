/* Entry 0x088BB708 | file offset 0x000B86E0 | FUN_088bb708 | bytes 88 */

undefined4 FUN_088bb708(int param_1)

{
  undefined4 uVar1;
  undefined2 local_1e [11];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_1e[0] = (undefined2)param_1;
    uVar1 = FUN_088bb600(DAT_089d7384,DAT_089d7384 + *(int *)(DAT_089d7380 + 8) * 0x14,local_1e,0);
  }
  return uVar1;
}

