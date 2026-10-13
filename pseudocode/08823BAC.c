/* Entry 0x08823BAC | file offset 0x00020B84 | FUN_08823bac | bytes 380 */

void FUN_08823bac(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_40 [4];
  float local_3c;
  
  cVar1 = *(char *)(param_1 + 0x30);
  iVar5 = 0;
  if (0 < cVar1) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x2c) + iVar4;
      FUN_089a3868(auStack_40,iVar3);
      local_3c = *(float *)(iVar3 + 0x78) - 0.01;
      iVar6 = iVar3 + 0x30;
      if ((*(byte *)(iVar3 + 0x7f) & 4) == 0) {
        *(byte *)(iVar3 + 0x7f) = *(byte *)(iVar3 + 0x7f) | 4;
        FUN_089a3868(iVar3 + 0x20,auStack_40);
        FUN_089a3868(iVar6,auStack_40);
        FUN_089a3868(iVar3 + 0x50,auStack_40);
        FUN_089a3868(iVar3 + 0x60,auStack_40);
        bVar2 = *(byte *)(iVar3 + 0x7f);
      }
      else {
        if (1.0 < *(float *)(iVar3 + 0x34) - local_3c) {
          FUN_089a3868(iVar3 + 0x20,iVar6);
        }
        FUN_089a3868(iVar6,auStack_40);
        bVar2 = *(byte *)(iVar3 + 0x7f);
      }
      if ((bVar2 & 1) != 0) {
        if (1.0 < *(float *)(iVar3 + 100) - local_3c) {
          FUN_089a3868(iVar3 + 0x50,iVar3 + 0x60);
        }
        FUN_089a3868(iVar3 + 0x60,auStack_40);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x80;
    } while (iVar5 < cVar1);
  }
  return;
}

