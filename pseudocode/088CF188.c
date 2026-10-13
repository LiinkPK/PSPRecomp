/* Entry 0x088CF188 | file offset 0x000CC160 | FUN_088cf188 | bytes 396 */

undefined4 *
FUN_088cf188(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 0x336c);
  **(undefined4 **)(param_1 + 0x336c) = 0;
  *(undefined4 *)(param_1 + 0x336c) = *(undefined4 *)(*(int *)(param_1 + 0x336c) + 4);
  iVar2 = **(int **)(param_1 + 0xebc0);
  **(int **)(param_1 + 0xebc0) = 0;
  *(undefined4 *)(param_1 + 0xebc0) = *(undefined4 *)(*(int *)(param_1 + 0xebc0) + 4);
  local_30 = param_2;
  local_2c = param_3;
  FUN_08870b10(param_2,&local_30,&local_2c);
  FUN_088dcb88(iVar2,local_30,param_6);
  if (*(int *)(param_1 + 0xc4f8) == 0) {
    *(int *)(param_1 + 0xc4f8) = iVar2;
    *(int *)(param_1 + 0xc4f4) = iVar2;
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x70) = 0;
    iVar4 = *(int *)(param_1 + 0xc4fc);
  }
  else {
    *(int *)(*(int *)(param_1 + 0xc4f8) + 0x6c) = iVar2;
    uVar1 = *(undefined4 *)(param_1 + 0xc4f8);
    *(undefined4 *)(iVar2 + 0x6c) = 0;
    *(undefined4 *)(iVar2 + 0x70) = uVar1;
    iVar4 = *(int *)(param_1 + 0xc4fc);
    *(int *)(param_1 + 0xc4f8) = iVar2;
  }
  *(int *)(param_1 + 0xc4fc) = iVar4 + 1;
  FUN_088da8e8(puVar3,iVar2);
  FUN_088da924(puVar3,0);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[2] = 0;
  if (param_4 != 0) {
    FUN_088dae0c(puVar3,param_4,param_5,0xffffffff,0xffffffff);
  }
  FUN_088ceec8(param_1,puVar3);
  *(undefined1 *)((int)puVar3 + 0x17) = 0;
  *(byte *)(puVar3 + 5) = *(byte *)(puVar3 + 5) | 1;
  return puVar3;
}

