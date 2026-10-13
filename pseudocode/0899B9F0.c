/* Entry 0x0899B9F0 | file offset 0x001989C8 | FUN_0899b9f0 | bytes 300 */

undefined4 * FUN_0899b9f0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_0899b75c(0x90);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x17] = 0xffffffff;
    puVar1[0x1a] = 0xff;
    puVar1[0xc] = 0xc9742400;
    puVar1[0xb] = 0x3f800000;
    puVar1[0xd] = 0x49742400;
    *puVar1 = 1;
    puVar1[0xe] = 0x41400000;
    puVar1[10] = 0x3f800000;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 1;
    puVar1[0x1f] = 1;
    puVar1[0x20] = 7;
    puVar1[0x1d] = 0;
    puVar1[0x1e] = 1;
    puVar1[0x21] = 0;
    puVar1[0x22] = 0;
    puVar3 = puVar1;
    if ((param_1 != 0) && (iVar2 = FUN_0899bc64(puVar1,param_1), iVar2 == 0)) {
      FUN_0899bb1c(puVar1);
      puVar3 = (undefined4 *)0x0;
    }
  }
  return puVar3;
}

