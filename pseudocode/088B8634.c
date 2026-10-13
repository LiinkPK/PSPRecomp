/* Entry 0x088B8634 | file offset 0x000B560C | FUN_088b8634 | bytes 376 */

void FUN_088b8634(undefined2 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  FUN_088b8538(param_1);
  iVar3 = 0;
  iVar2 = *(int *)(DAT_089d7408 + 8);
  iVar4 = 0;
  puVar5 = param_1;
  if (0 < iVar2) {
    do {
      iVar3 = iVar3 + 1;
      puVar6 = (undefined2 *)(DAT_089d740c + iVar4);
      iVar4 = iVar4 + 0x68;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 2;
    } while (iVar3 < iVar2);
  }
  *(int *)(param_1 + 0xafa) = iVar2;
  iVar3 = 0;
  iVar2 = *(int *)(DAT_089d72b8 + 8);
  iVar4 = 0;
  puVar5 = param_1;
  if (0 < iVar2) {
    do {
      iVar3 = iVar3 + 1;
      puVar6 = (undefined2 *)(DAT_089d72bc + iVar4);
      iVar4 = iVar4 + 0x44;
      puVar5[0x556] = *puVar6;
      puVar5 = puVar5 + 2;
    } while (iVar3 < iVar2);
  }
  *(int *)(param_1 + 0xafc) = iVar2;
  iVar2 = FUN_088c6cc8();
  iVar3 = 0;
  puVar5 = param_1;
  if (0 < iVar2) {
    do {
      puVar1 = (undefined4 *)FUN_088c6ce8(iVar3);
      iVar3 = iVar3 + 1;
      *(char *)(puVar5 + 0xa42) = (char)*puVar1;
      puVar5 = puVar5 + 2;
    } while (iVar3 < iVar2);
  }
  *(int *)(param_1 + 0xafe) = iVar2;
  iVar2 = 0;
  iVar4 = *(int *)(DAT_089d77e8 + 8);
  iVar3 = 0;
  puVar5 = param_1;
  if (0 < iVar4) {
    do {
      iVar2 = iVar2 + 1;
      puVar6 = (undefined2 *)(DAT_089d77ec + iVar3);
      iVar3 = iVar3 + 0x30;
      *(char *)(puVar5 + 0xac2) = (char)*puVar6;
      puVar5 = puVar5 + 1;
    } while (iVar2 < iVar4);
  }
  *(int *)(param_1 + 0xb00) = iVar4;
  FUN_088b87ac(param_1);
  FUN_088b87b4(param_1);
  FUN_088b89d8(param_1);
  return;
}

