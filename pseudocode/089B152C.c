/* Entry 0x089B152C | file offset 0x001AE504 | FUN_089b152c | bytes 200 */

void FUN_089b152c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xfffe;
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xff7fffff;
    }
    else {
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)FUN_089ab5ec(0,0x10,0x10);
        *(undefined4 **)(param_1 + 0x28) = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          return;
        }
        *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 1;
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x800000;
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      puVar4[3] = param_2[3];
      *puVar4 = uVar1;
      puVar4[1] = uVar2;
      puVar4[2] = uVar3;
    }
  }
  return;
}

