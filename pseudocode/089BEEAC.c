/* Entry 0x089BEEAC | file offset 0x001BBE84 | FUN_089beeac | bytes 112 */

int FUN_089beeac(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = 0;
  if (param_1 != 0) {
    puVar4 = (ushort *)(*(int *)(param_1 + 4) + param_1);
    puVar2 = (ushort *)(param_1 + *(int *)(param_1 + 8));
    if (puVar2 < puVar4) {
      do {
        if (param_2 == 0) {
          iVar1 = *(int *)(puVar2 + 2);
LAB_089beefc:
          iVar3 = iVar3 + 1;
        }
        else {
          iVar1 = *(int *)(puVar2 + 2);
          if (param_2 == *puVar2) goto LAB_089beefc;
        }
        puVar2 = (ushort *)((int)puVar2 + iVar1);
        if (puVar4 <= puVar2) {
          return iVar3;
        }
      } while( true );
    }
  }
  return 0;
}

