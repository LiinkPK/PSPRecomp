/* Entry 0x089B10D4 | file offset 0x001AE0AC | FUN_089b10d4 | bytes 212 */

void FUN_089b10d4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      thunk_FUN_089abeac(0,*(undefined4 *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) & 0xffbf;
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xffef;
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 0x30);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_089ab5ec(0,0x40,0x40);
        *(undefined4 **)(param_1 + 0x30) = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        *(ushort *)(param_1 + 2) = *(ushort *)(param_1 + 2) | 0x40;
        *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 0x10;
      }
      puVar5 = param_2 + 0x10;
      do {
        uVar1 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        *puVar2 = *param_2;
        param_2 = param_2 + 4;
        puVar2[1] = uVar1;
        puVar2[2] = uVar3;
        puVar2[3] = uVar4;
        puVar2 = puVar2 + 4;
      } while (param_2 != puVar5);
    }
  }
  return;
}

