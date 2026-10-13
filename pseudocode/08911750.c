/* Entry 0x08911750 | file offset 0x0010E728 | FUN_08911750 | bytes 236 */

void FUN_08911750(undefined4 *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = param_1 + 0x2a;
  do {
    if (*(char *)((int)puVar2 + 0xd) != '\0') {
      bVar1 = false;
      if ((param_2 == puVar2[1]) && (bVar1 = false, *(char *)(puVar2 + 3) == '\x05')) {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)((int)puVar2 + 0xf) = 1;
        return;
      }
    }
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 10;
    if (3 < iVar3) {
      iVar3 = 0;
      puVar2 = param_1 + 0x2a;
      do {
        if (*(char *)((int)puVar2 + 0xd) == '\0') {
          FUN_08911d68(puVar2,*param_1,param_2,param_1[0x57],param_3);
          return;
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 10;
      } while (iVar3 < 4);
      return;
    }
  } while( true );
}

