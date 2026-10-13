/* Entry 0x0891595C | file offset 0x00112934 | FUN_0891595c | bytes 416 */

/* WARNING: Removing unreachable block (ram,0x089159ec) */

undefined4 FUN_0891595c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  iVar2 = FUN_0891705c(0xffffffff);
  if ((*(int *)(param_1 + 0x54) == 0) ||
     (iVar3 = FUN_08915834(param_1,*(undefined1 *)(iVar2 + 0xe),*(int *)(param_1 + 0x54) + 0x14),
     iVar3 == 0)) {
    if (*(char *)(param_1 + 0x7d9) == '\0') {
      uVar4 = 0;
    }
    else {
      FUN_089125a8(iVar2);
      FUN_0890f4ac(param_1 + 0x90);
      pbVar5 = (byte *)FUN_08912d20((int)*(char *)(*(int *)(param_1 + 0x54) + 2),
                                    (int)*(char *)(*(int *)(param_1 + 0x54) + 3),
                                    (int)*(short *)(iVar2 + 10));
      if (pbVar5 != (byte *)0x0) {
        bVar1 = *pbVar5;
        *(uint *)(param_1 + 0x50) = (uint)bVar1;
        *(ushort *)(iVar2 + 0x1b0) = (ushort)bVar1;
        *(short *)(iVar2 + 0x1b2) = (short)(char)pbVar5[5];
      }
      if (*(int *)(param_1 + 0x50) < 0) {
        FUN_08912628(iVar2);
      }
      if ((*(byte *)(*(int *)(param_1 + 0x54) + 1) & 2) == 0) {
        *(undefined4 *)(iVar2 + 0x264) = *(undefined4 *)(iVar2 + 0x264);
        *(uint *)(iVar2 + 0x260) = *(uint *)(iVar2 + 0x260) & 0xffffffdf;
      }
      else {
        *(undefined4 *)(iVar2 + 0x264) = *(undefined4 *)(iVar2 + 0x264);
        *(uint *)(iVar2 + 0x260) = *(uint *)(iVar2 + 0x260) | 0x20;
      }
      FUN_08916f78(0,FUN_089179b8);
      *(undefined1 *)(param_1 + 0x7d9) = 0;
      *(undefined1 *)(param_1 + 0x7e5) = 1;
      FUN_088ac8c8(DAT_089d712c,1);
      uVar4 = 1;
    }
  }
  else {
    if (iVar3 != -2) {
      *(char *)(iVar2 + 0xe) = *(char *)(iVar2 + 0xe) + '\x01';
    }
    if (iVar3 < 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

