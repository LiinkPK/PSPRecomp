/* Entry 0x08943124 | file offset 0x001400FC | FUN_08943124 | bytes 400 */

undefined1 * FUN_08943124(int param_1,char *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_20;
  
  if (((*param_2 == 'F') && (param_2[1] == 'E')) && (param_2[2] == 'P')) {
    iVar1 = FUN_089434d8(param_1,param_2);
    if (iVar1 == 0) {
      puVar2 = (undefined1 *)0x0;
    }
    else {
      iVar1 = FUN_0894349c(param_1,*(undefined4 *)(param_2 + 0x10));
      if (iVar1 == 0) {
        puVar2 = (undefined1 *)FUN_08971134(*(undefined4 *)(param_1 + 0x18),0x24,&local_20,1);
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = (undefined1 *)0x0;
        }
        else {
          *(ushort *)(param_2 + 0x18) = *(ushort *)(param_2 + 0x18) & 0xf;
          iVar1 = param_1 + (uint)*(ushort *)(param_2 + 0x18) * 4;
          iVar4 = *(int *)(param_1 + 100);
          *(int *)(iVar1 + 0xb4) = *(int *)(iVar1 + 0xb4) + local_20;
          *(int *)(param_1 + 100) = iVar4 + 1;
          *puVar2 = 0x66;
          *(undefined2 *)(puVar2 + 2) = 0;
          uVar3 = *(undefined4 *)(param_2 + 0x10);
          *(char **)(puVar2 + 0x18) = param_2;
          *(undefined4 *)(puVar2 + 0x14) = uVar3;
          if (*(int *)(param_1 + 0x5c) == 0) {
            *(undefined1 **)(param_1 + 0x60) = puVar2;
            *(undefined1 **)(param_1 + 0x5c) = puVar2;
            *(undefined4 *)(puVar2 + 0x1c) = 0;
            *(undefined4 *)(puVar2 + 0x20) = 0;
          }
          else {
            *(undefined1 **)(*(int *)(param_1 + 0x60) + 0x20) = puVar2;
            uVar3 = *(undefined4 *)(param_1 + 0x60);
            *(undefined4 *)(puVar2 + 0x20) = 0;
            *(undefined4 *)(puVar2 + 0x1c) = uVar3;
            *(undefined1 **)(param_1 + 0x60) = puVar2;
          }
          FUN_0894351c(param_1,param_2);
          FUN_08947004(param_1,puVar2,param_2);
          FUN_0894728c(param_1,param_2);
          FUN_08947444(param_1,param_2);
          FUN_089475fc(param_1,param_2);
        }
      }
      else {
        puVar2 = (undefined1 *)0x0;
      }
    }
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}

