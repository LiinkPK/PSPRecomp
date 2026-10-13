/* Entry 0x08865278 | file offset 0x00062250 | FUN_08865278 | bytes 500 */

void FUN_08865278(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  uVar1 = puVar4[5];
  if (5 < uVar1) {
    return;
  }
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      iVar2 = FUN_088661a0(DAT_089d5ec0);
      if (iVar2 == 0) {
        return;
      }
      puVar4[5] = 3;
      (**(code **)(puVar4[0xc] + 0xc))((int)puVar4 + (int)*(short *)(puVar4[0xc] + 8));
      return;
    }
    if (uVar1 == 3) {
      FUN_0888245c(*puVar4,puVar4[10],puVar4[0xb]);
      return;
    }
    if (uVar1 == 4) {
      return;
    }
    if (uVar1 == 5) {
      uVar3 = *puVar4;
      if (*(char *)((int)puVar4 + 0x25) == '\0') {
        FUN_088826b4(uVar3);
        (**(code **)(puVar4[0xc] + 0x14))((int)puVar4 + (int)*(short *)(puVar4[0xc] + 0x10));
        *(undefined1 *)((int)puVar4 + 0x25) = 1;
        uVar3 = *puVar4;
      }
      iVar2 = FUN_088826d4(uVar3);
      if (0 < iVar2) {
        FUN_088825b4();
        return;
      }
      FUN_08882704(*puVar4);
      *puVar4 = 0;
      puVar4[5] = 0;
      *(undefined1 *)((int)puVar4 + 0x25) = 0;
      FUN_08865204(puVar4);
      FUN_088822b4(param_1);
      (**(code **)(puVar4[0xc] + 0x1c))((int)puVar4 + (int)*(short *)(puVar4[0xc] + 0x18));
      return;
    }
    iVar2 = 0;
    do {
      iVar2 = FUN_088651ac(iVar2);
      if (iVar2 == 0) break;
    } while ((*(uint *)(iVar2 + 0xc) & puVar4[3]) == 0);
    if (iVar2 != 0) {
      return;
    }
    FUN_088fe9cc();
    puVar4[5] = 1;
  }
  iVar2 = FUN_088fea4c();
  if (iVar2 == 0) {
    FUN_088651cc(puVar4);
    FUN_08866178(DAT_089d5ec0,*(undefined1 *)((int)puVar4 + 0x26));
    puVar4[5] = 2;
  }
  return;
}

