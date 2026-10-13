/* Entry 0x088B2A30 | file offset 0x000AFA08 | FUN_088b2a30 | bytes 84 */

undefined4 FUN_088b2a30(int param_1)

{
  undefined4 uVar1;
  undefined2 local_e [5];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_e[0] = (undefined2)param_1;
    uVar1 = FUN_088b27f4(DAT_089d72c0,DAT_089d72c0 + *(int *)(DAT_089d72b8 + 0xc) * 8,local_e,0);
  }
  return uVar1;
}

