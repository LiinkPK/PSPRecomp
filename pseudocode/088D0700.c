/* Entry 0x088D0700 | file offset 0x000CD6D8 | FUN_088d0700 | bytes 272 */

undefined4 * FUN_088d0700(int param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)**(undefined4 **)(param_1 + 0x336c);
  **(undefined4 **)(param_1 + 0x336c) = 0;
  *(undefined4 *)(param_1 + 0x336c) = *(undefined4 *)(*(int *)(param_1 + 0x336c) + 4);
  iVar1 = FUN_088d0608(param_1,param_2);
  if (iVar1 == 0) {
    if (**(int **)(param_1 + 0x336c) != 0) {
      for (piVar3 = (int *)(*(int **)(param_1 + 0x336c))[1]; *piVar3 != 0; piVar3 = (int *)piVar3[1]
          ) {
      }
    }
    **(undefined4 **)(param_1 + 0x3370) = puVar4;
    puVar4 = (undefined4 *)0x0;
    *(undefined4 *)(param_1 + 0x3370) = *(undefined4 *)(*(int *)(param_1 + 0x3370) + 4);
  }
  else {
    FUN_088da8e8(puVar4,iVar1);
    FUN_088da924(puVar4,0);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[2] = 0;
    if (param_4 != -1) {
      uVar2 = FUN_088d0684(param_1,param_2,param_4);
      FUN_088da924(puVar4,uVar2);
    }
    FUN_088ceec8(param_1,puVar4);
    *(undefined1 *)((int)puVar4 + 0x17) = 0;
    *(byte *)(puVar4 + 5) = *(byte *)(puVar4 + 5) | 1;
  }
  return puVar4;
}

