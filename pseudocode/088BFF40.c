/* Entry 0x088BFF40 | file offset 0x000BCF18 | FUN_088bff40 | bytes 84 */

undefined4 FUN_088bff40(int param_1)

{
  undefined4 uVar1;
  undefined2 local_c [4];
  
  uVar1 = 0;
  if (param_1 != -1) {
    local_c[0] = (undefined2)param_1;
    uVar1 = FUN_088bfc94(DAT_089d73ec,DAT_089d73ec + *(short *)(DAT_089d73e4 + 8) * 8,local_c,0);
  }
  return uVar1;
}

