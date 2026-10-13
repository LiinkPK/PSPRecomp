/* Entry 0x08899380 | file offset 0x00096358 | FUN_08899380 | bytes 320 */

void FUN_08899380(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auStack_110 [256];
  
  uVar3 = DAT_089d6ac8;
  puVar1 = (undefined4 *)FUN_08899300();
  uVar4 = puVar1[0x40];
  if (uVar4 < 6) {
    if (uVar4 == 1) {
      iVar2 = FUN_08893cf8(uVar3);
      if (iVar2 == 0) {
        return;
      }
      puVar1[0x40] = 2;
    }
    else if (uVar4 != 2) {
      if (uVar4 == 3) {
        return;
      }
      if (uVar4 != 4) {
        return;
      }
      uVar3 = FUN_0885c6cc(puVar1[0x3c],puVar1[0x3f],0x40,0,1,0);
      *puVar1 = uVar3;
      FUN_08935524(uVar3,puVar1[0x3d],puVar1[0x3f]);
      FUN_0889a2f0(puVar1,*puVar1);
      puVar1[0x3d] = 0;
      puVar1[0x3e] = 0;
      puVar1[0x3f] = 0;
      puVar1[0x40] = 5;
      return;
    }
    uVar3 = FUN_0889381c(uVar3);
    FUN_0893476c(auStack_110,"map/%s.id",uVar3);
    FUN_088629dc(auStack_110,puVar1[0x3d],puVar1[0x3e],FUN_08899344,0,1);
    puVar1[0x40] = 3;
  }
  return;
}

